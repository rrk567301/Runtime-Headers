@class NSObject;
@protocol OS_session;

@interface SimpleSession : NSObject

@property (retain) NSObject<OS_session> *session;

- (void).cxx_destruct;
- (id)initWithFlags:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithSessionCore:(id)a0;

@end
