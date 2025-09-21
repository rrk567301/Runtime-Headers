@class NSString, _WKUserContentWorld, WKContentWorld;

@interface WKUserScript : NSObject <WKObject, NSCopying> {
    struct AlignedStorage<API::UserScript, 8UL> { struct Storage { unsigned char data[120]; } m_storage; } _userScript;
}

@property (readonly, nonatomic) _WKUserContentWorld *_userContentWorld;
@property (readonly, nonatomic) WKContentWorld *_contentWorld;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, nonatomic) long long injectionTime;
@property (readonly, nonatomic, getter=isForMainFrameOnly) BOOL forMainFrameOnly;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithSource:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2 includeMatchPatternStrings:(id)a3 excludeMatchPatternStrings:(id)a4 associatedURL:(id)a5 contentWorld:(id)a6;
- (id)_initWithSource:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2 includeMatchPatternStrings:(id)a3 excludeMatchPatternStrings:(id)a4 associatedURL:(id)a5 contentWorld:(id)a6 deferRunningUntilNotification:(BOOL)a7;
- (id)initWithSource:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2;
- (id)initWithSource:(id)a0 injectionTime:(long long)a1 forMainFrameOnly:(BOOL)a2 inContentWorld:(id)a3;

@end
