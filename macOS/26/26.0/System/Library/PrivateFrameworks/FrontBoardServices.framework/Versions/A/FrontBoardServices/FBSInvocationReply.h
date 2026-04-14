@class NSString, BSSettings;

@interface FBSInvocationReply : NSObject <BSXPCAutoCoding> {
    BSSettings *_parameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)membersForCoder;
- (void).cxx_destruct;

@end
