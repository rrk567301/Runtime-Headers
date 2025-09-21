@interface B2PAutoHealGetResponse : B2PResponse

@property (readonly) unsigned char enable;
@property (readonly) unsigned char persistent;

- (id)description;
- (char)parseResponse:(id)a0;

@end
