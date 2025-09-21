@class NSString;

@interface WKContentRuleList : NSObject <WKObject> {
    struct AlignedStorage<API::ContentRuleList, 8UL> { struct Storage { unsigned char data[56]; } m_storage; } _contentRuleList;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_parseRuleList:(id)a0;
+ (BOOL)_supportsRegularExpression:(id)a0;

- (void)dealloc;

@end
