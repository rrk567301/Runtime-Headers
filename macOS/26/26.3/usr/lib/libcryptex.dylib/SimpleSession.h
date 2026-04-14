@class NSObject;
@protocol OS_session;

@interface SimpleSession : NSObject

@property (retain) NSObject<OS_session> *session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFlags:(unsigned long long)a0;
- (id)initWithSessionCore:(id)a0;

@end
