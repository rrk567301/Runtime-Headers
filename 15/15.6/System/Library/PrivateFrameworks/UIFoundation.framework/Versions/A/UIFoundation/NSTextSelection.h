@class NSArray, NSDictionary;
@protocol NSTextLocation;

@interface NSTextSelection : NSObject <NSSecureCoding> {
    NSDictionary *_typingAttributes;
}

@property (class, readonly) char supportsSecureCoding;

@property (getter=isTransient) char transient;
@property (retain) id<NSTextLocation> selectionAnchorLocation;
@property (readonly, copy) NSArray *textRanges;
@property (readonly) long long granularity;
@property (readonly) long long affinity;
@property double anchorPositionOffset;
@property (getter=isLogical) char logical;
@property (retain) id<NSTextLocation> secondarySelectionLocation;
@property (copy) NSDictionary *typingAttributes;

+ (id)descriptionForAffinity:(long long)a0;
+ (id)descriptionForGranularity:(long long)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsLocation:(id)a0;
- (id)initWithLocation:(id)a0 affinity:(long long)a1;
- (id)initWithRange:(id)a0 affinity:(long long)a1 granularity:(long long)a2;
- (id)initWithRanges:(id)a0 affinity:(long long)a1 granularity:(long long)a2;
- (void)setTypingAttributes:(id)a0;
- (id)typingAttributes;
- (char)isEqualToTextSelection:(id)a0;
- (id)textRangeContainingLocation:(id)a0;
- (id)textSelectionWithTextRanges:(id)a0;

@end
