@class NSDictionary, NSError;

@interface AXSimpleMessage : NSObject

@property (retain, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSError *error;

+ (id)messageWithPayload:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;

@end
