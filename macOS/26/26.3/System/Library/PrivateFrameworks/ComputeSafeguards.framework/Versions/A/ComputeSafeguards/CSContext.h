@class NSString, NSNumber;

@interface CSContext : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSNumber *state;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 andState:(id)a1;

@end
