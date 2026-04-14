@class NSString;
@protocol CNContactBlockingAnalyzer, CNKeyDescriptor;

@interface CNContactBlockingAnalyzer : NSObject <CNContactBlockingAnalyzer>

@property (class, readonly) id<CNKeyDescriptor> descriptorForRequiredKeys;
@property (class, readonly) id<CNContactBlockingAnalyzer> sharedAnalyzer;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isBlockedContact:(id)a0;

@end
