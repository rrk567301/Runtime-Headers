@class NSNumber, NSString, NSArray;

@interface USOSerializedGraphNode : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property int usoElementId;
@property (retain, nonatomic) NSNumber *usoVerbId;
@property (retain, nonatomic) NSNumber *integerPayload;
@property (retain, nonatomic) NSString *stringPayload;
@property (retain, nonatomic) NSString *entityLabel;
@property (retain, nonatomic) NSString *verbLabel;
@property (retain, nonatomic) NSArray *normalizedStringPayloads;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUsoElementId:(int)a0;

@end
