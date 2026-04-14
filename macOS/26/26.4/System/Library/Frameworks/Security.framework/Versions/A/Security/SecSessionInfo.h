@class NSData;

@interface SecSessionInfo : NSObject

@property (retain) NSData *psk;
@property (retain) NSData *psk_id;
@property unsigned int ticket_age_add;
@property unsigned long long ticket_creation_time;
@property unsigned long long ticket_lifetime;

- (void).cxx_destruct;
- (id)initWithPSK:(id)a0 :(id)a1 :(unsigned int)a2 :(unsigned long long)a3 :(unsigned long long)a4;

@end
