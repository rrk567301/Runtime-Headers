@class NSDictionary;

@interface CADSequenceToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *allDBSequenceMap;

- (id)initWithAllDBSequenceMap:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMainDBSequence:(int)a0;
- (id)serializedSequenceString;
- (id)description;
- (id)initWithCoder:(id)a0;
- (int)mainDBSequence;
- (int)sequenceForDatabaseID:(int)a0;
- (id)initWithSerializedSequenceString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
