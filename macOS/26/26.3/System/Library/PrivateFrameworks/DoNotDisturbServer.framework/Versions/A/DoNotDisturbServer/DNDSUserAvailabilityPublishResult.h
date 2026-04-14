@class NSString, AKAvailability;

@interface DNDSUserAvailabilityPublishResult : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) AKAvailability *availability;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 availability:(id)a1;

@end
