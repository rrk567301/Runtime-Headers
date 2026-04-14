@class NSString, NSArray;

@interface _WKArchiveExclusionRule : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _elementLocalName;
    struct RetainPtr<NSArray<NSString *>> { NSArray *m_ptr; } _attributeLocalNames;
    struct RetainPtr<NSArray<NSString *>> { NSArray *m_ptr; } _attributeValues;
}

@property (readonly, nonatomic) NSString *elementLocalName;
@property (readonly, nonatomic) NSArray *attributeLocalNames;
@property (readonly, nonatomic) NSArray *attributeValues;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithElementLocalName:(id)a0 attributeLocalNames:(id)a1 attributeValues:(id)a2;

@end
