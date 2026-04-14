@class NSDictionary, NSString;
@protocol WDSession;

@interface WDRemoteElement : NSObject <NSCopying> {
    id<WDSession> _relatedSession;
}

@property (readonly, copy, nonatomic) NSDictionary *clientPayload;
@property (readonly, copy, nonatomic) NSDictionary *automationPayload;
@property (readonly, copy, nonatomic) NSString *nodeHandle;

+ (id)elementFromIdentifier:(id)a0 inSession:(id)a1;
+ (id)elementFromClientPayload:(id)a0 inSession:(id)a1;
+ (id)translatePayload:(id)a0 usingBlock:(id /* block */)a1;
+ (id)elementFromAutomationPayload:(id)a0 inSession:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNodeHandle:(id)a0 relatedSession:(id)a1;
- (id)automationWebElementKey;
- (BOOL)isEqualToElement:(id)a0;

@end
