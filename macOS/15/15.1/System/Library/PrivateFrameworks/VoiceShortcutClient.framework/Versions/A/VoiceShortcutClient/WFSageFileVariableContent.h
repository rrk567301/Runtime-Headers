@class NSString, NSURL;

@interface WFSageFileVariableContent : NSObject <WFSageVariableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
