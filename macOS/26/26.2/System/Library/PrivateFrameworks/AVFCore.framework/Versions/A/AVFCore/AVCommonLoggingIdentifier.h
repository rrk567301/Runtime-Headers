@class NSString;

@interface AVCommonLoggingIdentifier : NSObject <AVLoggingIdentifier> {
    NSString *_identifierName;
    unsigned int _derivedIdentifierCounter;
}

@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
