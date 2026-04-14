@class NSArray;

@interface DocumentUnderstanding.DUStructuredEntityResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ structuredEntities;
}

@property (nonatomic, copy) NSArray *structuredEntities;
@property (nonatomic, retain) void /* unknown type, empty encoding */ responseDebugInfo;

- (id)init;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
