@class NSString, NSDictionary;

@interface _WKTextManipulationToken : NSObject {
    struct RetainPtr<NSDictionary<NSString *,id>> { void *m_ptr; } _userInfo;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *content;
@property (nonatomic, getter=isExcluded) char excluded;
@property (readonly, copy, nonatomic) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_descriptionPreservingPrivacy:(char)a0;
- (char)isEqualToTextManipulationToken:(id)a0 includingContentEquality:(char)a1;

@end
