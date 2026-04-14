@class NSArray, IMMessageItem;

@interface IMSimulatedMessage : IMSimulatedEntry

@property (retain, nonatomic) IMMessageItem *item;
@property (retain, nonatomic) NSArray *parts;

+ (BOOL)supportsSecureCoding;

- (id)guid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)simulatedItem;

@end
