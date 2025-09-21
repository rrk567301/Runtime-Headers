@class NSArray, NSMutableArray;

@interface MADTextInput : NSObject <NSSecureCoding> {
    NSMutableArray *_segments;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *segments;

+ (long long)csuTokenizerRevision;
+ (long long)csuTokenizerRevisionForEmbeddingVersion:(unsigned long long)a0;
+ (long long)tokenizerRevision;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (void)addText:(id)a0;
- (void)addEntityUUID:(id)a0;
- (void)addTokenIDs:(id)a0;

@end
