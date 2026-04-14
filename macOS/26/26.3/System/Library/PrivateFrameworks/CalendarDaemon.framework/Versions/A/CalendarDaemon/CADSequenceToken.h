@class NSDictionary;

@interface CADSequenceToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *allDBSequenceMap;

- (int)mainDBSequence;
- (id)initWithSerializedSequenceString:(id)a0;
- (id)initWithMainDBSequence:(int)a0;
- (id)description;
- (int)sequenceForDatabaseID:(int)a0;
- (id)serializedSequenceString;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAllDBSequenceMap:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
