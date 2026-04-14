@class NSString, AKAvailability;

@interface DNDSUserAvailabilityPublishResult : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) AKAvailability *availability;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 availability:(id)a1;

@end
