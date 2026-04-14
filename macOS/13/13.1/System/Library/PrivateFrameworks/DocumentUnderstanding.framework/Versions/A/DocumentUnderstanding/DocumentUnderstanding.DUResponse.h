@interface DocumentUnderstanding.DUResponse : NSObject <NSCoding, NSCopying>

@property (nonatomic, retain) void /* unknown type, empty encoding */ topics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ structuredEntities;
@property (nonatomic, retain) void /* unknown type, empty encoding */ languageTags;
@property (nonatomic, retain) void /* unknown type, empty encoding */ productCategories;
@property (nonatomic, retain) void /* unknown type, empty encoding */ userInterfaceUnderstandingResults;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)init;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
