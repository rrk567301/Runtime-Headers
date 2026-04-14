@class NSString, NSDictionary;

@interface _WKTextManipulationToken : NSObject {
    struct RetainPtr<NSDictionary<NSString *,id>> { NSDictionary *m_ptr; } _userInfo;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *content;
@property (nonatomic, getter=isExcluded) BOOL excluded;
@property (readonly, copy, nonatomic) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id).cxx_construct;
- (id)_descriptionPreservingPrivacy:(BOOL)a0;
- (BOOL)isEqualToTextManipulationToken:(id)a0 includingContentEquality:(BOOL)a1;

@end
