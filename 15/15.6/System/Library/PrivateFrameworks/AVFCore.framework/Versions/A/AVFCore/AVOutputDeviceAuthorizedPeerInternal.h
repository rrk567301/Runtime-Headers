@class NSString, NSData;

@interface AVOutputDeviceAuthorizedPeerInternal : NSObject {
    NSString *ID;
    NSData *publicKey;
    char isAdmin;
}

@end
