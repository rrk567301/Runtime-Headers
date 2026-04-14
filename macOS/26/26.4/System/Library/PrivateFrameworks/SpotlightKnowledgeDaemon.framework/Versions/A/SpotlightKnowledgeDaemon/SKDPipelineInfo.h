@class NSString, NSDictionary;

@interface SKDPipelineInfo : NSObject <SKDEventInfo>

@property (readonly, copy) NSString *domain;
@property (readonly) long long code;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
