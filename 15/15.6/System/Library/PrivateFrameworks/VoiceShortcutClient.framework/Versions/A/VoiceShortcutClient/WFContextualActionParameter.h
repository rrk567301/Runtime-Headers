@class NSString, WFDisambiguationCollectionFilter;
@protocol WFPropertyListObject;

@interface WFContextualActionParameter : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *wfParameterKey;
@property (readonly, nonatomic) id<WFPropertyListObject> wfSerializedRepresentation;
@property (readonly, nonatomic, getter=isAskEachTime) char askEachTime;
@property (readonly, copy, nonatomic) WFDisambiguationCollectionFilter *askEachTimeCollectionFilter;
@property (readonly, nonatomic, getter=isActionInput) char actionInput;
@property (readonly, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *displayString;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 askEachTime:(char)a3;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 askEachTime:(char)a3 askEachTimeCollectionFilter:(id)a4;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 isActionInput:(char)a3;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 wfSerializedRepresentation:(id)a3;
- (id)initWithType:(id)a0 displayString:(id)a1 wfParameterKey:(id)a2 wfSerializedRepresentation:(id)a3 askEachTime:(char)a4 askEachTimeCollectionFilter:(id)a5 actionInput:(char)a6;

@end
