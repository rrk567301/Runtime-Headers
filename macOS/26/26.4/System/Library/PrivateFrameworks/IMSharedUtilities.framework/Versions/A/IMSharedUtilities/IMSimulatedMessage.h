@class NSArray, IMMessageItem;

@interface IMSimulatedMessage : IMSimulatedEntry

@property (retain, nonatomic) IMMessageItem *item;
@property (retain, nonatomic) NSArray *parts;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)guid;
- (id)simulatedItem;

@end
