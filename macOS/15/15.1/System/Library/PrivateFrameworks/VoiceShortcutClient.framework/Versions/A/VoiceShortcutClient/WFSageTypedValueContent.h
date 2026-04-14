@class NSData, NSString;

@interface WFSageTypedValueContent : NSObject <WFSageVariableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *encodedTypedValue;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
