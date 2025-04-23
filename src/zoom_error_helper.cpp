#include "zoom_error_helper.h"

using namespace ZOOMVIDEOSDK;

const char *getErrorName(ZoomVideoSDKErrors errorCode) {
  switch (errorCode) {
  case ZoomVideoSDKErrors_Success:
    return "Success";
  case ZoomVideoSDKErrors_Wrong_Usage:
    return "Wrong Usage";
  case ZoomVideoSDKErrors_Internal_Error:
    return "Internal Error";
  case ZoomVideoSDKErrors_Uninitialize:
    return "Uninitialized";
  case ZoomVideoSDKErrors_Memory_Error:
    return "Memory Error";
  case ZoomVideoSDKErrors_Load_Module_Error:
    return "Load Module Error";
  case ZoomVideoSDKErrors_UnLoad_Module_Error:
    return "Unload Module Error";
  case ZoomVideoSDKErrors_Invalid_Parameter:
    return "Invalid Parameter";
  case ZoomVideoSDKErrors_Unknown:
    return "Unknown Error";
  case ZoomVideoSDKErrors_Auth_Error:
    return "Authentication Error";
  case ZoomVideoSDKErrors_JoinSession_NoSessionName:
    return "Join Session: No Session Name";
  case ZoomVideoSDKErrors_JoinSession_NoSessionToken:
    return "Join Session: No Session Token";
  case ZoomVideoSDKErrors_JoinSession_NoUserName:
    return "Join Session: No User Name";
  case ZoomVideoSDKErrors_JoinSession_Invalid_SessionToken:
    return "Join Session: Invalid Session Token";
  case ZoomVideoSDKErrors_JoinSession_Invalid_SessionName:
    return "Join Session: Invalid Session Name";
  case ZoomVideoSDKErrors_JoinSession_SessionName_TooLong:
    return "Join Session: Session Name Too Long";
  case ZoomVideoSDKErrors_JoinSession_Invalid_Password:
    return "Join Session: Invalid Password";
  case ZoomVideoSDKErrors_Call_Too_Frequently:
    return "Call Too Frequently";
  case ZoomVideoSDKErrors_No_Impl:
    return "No Implementation";
  case ZoomVideoSDKErrors_Dont_Support_Feature:
    return "Feature Not Supported";
  case ZoomVideoSDKErrors_Remove_Folder_Fail:
    return "Remove Folder Failed";
  case ZoomVideoSDKErrors_Auth_Empty_Key_or_Secret:
    return "Auth: Empty Key or Secret";
  case ZoomVideoSDKErrors_Auth_Wrong_Key_or_Secret:
    return "Auth: Wrong Key or Secret";
  case ZoomVideoSDKErrors_Auth_DoesNot_Support_SDK:
    return "Auth: Does Not Support SDK";
  case ZoomVideoSDKErrors_Auth_Disable_SDK:
    return "Auth: SDK Disabled";
  case ZoomVideoSDKErrors_SessionModule_Not_Found:
    return "Session Module Not Found";
  case ZoomVideoSDKErrors_SessionService_Invalid:
    return "Session Service Invalid";
  case ZoomVideoSDKErrors_Session_Join_Failed:
    return "Session Join Failed";
  // File Transfer Errors
  case ZoomVideoSDKErrors_Filetransfer_UnknowError:
    return "File Transfer: Unknown Error";
  case ZoomVideoSDKErrors_Filetransfer_FileTypeBlocked:
    return "File Transfer: File Type Blocked";
  case ZoomVideoSDKErrors_Filetransfer_FileSizelimited:
    return "File Transfer: File Size Limited";
  // Spotlight Errors
  case ZoomVideoSDKErrors_Spotlight_NotEnoughUsers:
    return "Spotlight: Not Enough Users";
  case ZoomVideoSDKErrors_Spotlight_ToMuchSpotlightedUsers:
    return "Spotlight: Too Many Spotlighted Users";
  case ZoomVideoSDKErrors_Spotlight_UserCannotBeSpotlighted:
    return "Spotlight: User Cannot Be Spotlighted";
  case ZoomVideoSDKErrors_Spotlight_UserWithoutVideo:
    return "Spotlight: User Without Video";
  case ZoomVideoSDKErrors_Spotlight_UserNotSpotlighted:
    return "Spotlight: User Not Spotlighted";
  default:
    return "Unknown Error";
  }
}
