@class NSString, NSDictionary;

@interface _WKNotificationData : NSObject {
    struct RetainPtr<NSDictionary> { void *m_ptr; } _dictionaryRepresentation;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *origin;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) unsigned long long alert;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (id)initWithCoreData:(const void *)a0 dataStore:(id)a1;

@end
