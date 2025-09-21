@class NSString, NSArray;

@interface _WKTextManipulationItem : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _identifier;
    struct RetainPtr<NSArray<_WKTextManipulationToken *>> { void *m_ptr; } _tokens;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) char isSubframe;
@property (readonly, nonatomic) char isCrossSiteSubframe;
@property (readonly, copy, nonatomic) NSString *debugDescription;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_descriptionPreservingPrivacy:(char)a0;
- (id)initWithIdentifier:(id)a0 tokens:(id)a1;
- (id)initWithIdentifier:(id)a0 tokens:(id)a1 isSubframe:(char)a2 isCrossSiteSubframe:(char)a3;
- (char)isEqualToTextManipulationItem:(id)a0 includingContentEquality:(char)a1;

@end
