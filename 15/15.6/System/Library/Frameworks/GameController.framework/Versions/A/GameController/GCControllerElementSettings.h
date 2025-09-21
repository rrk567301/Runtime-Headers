@class NSString;

@interface GCControllerElementSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isCustomized) char customized;
@property (readonly, nonatomic) NSString *mappingKey;
@property (copy, nonatomic) id /* block */ changedHandler;
@property (nonatomic) char invertHorizontally;
@property (nonatomic) char invertVertically;
@property (nonatomic) char swapAxes;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)setDictionaryRepresentation:(id)a0;
- (void)setDefaultValues;
- (id)initWithElementKey:(id)a0;
- (void)setDictionaryRepresentation:(id)a0 fromCoder:(char)a1;

@end
