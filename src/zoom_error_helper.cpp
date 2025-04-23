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
    case ZoomVideoSDKErrors_JoinSession_SessionName_TooLong:
        return "Join Session: Session Name Too Long";
    case ZoomVideoSDKErrors_JoinSession_Invalid_Password:
        return "Join Session: Invalid Password";
    default:
        return "Unknown Error";
    }
}
