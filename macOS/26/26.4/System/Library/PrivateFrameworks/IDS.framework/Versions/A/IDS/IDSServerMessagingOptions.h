@class NSNumber, NSDictionary;

@interface IDSServerMessagingOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *cancelOnClientCrash;
@property (copy, nonatomic) NSDictionary *additionalTopLevelFields;
@property (retain, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) NSNumber *command;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
