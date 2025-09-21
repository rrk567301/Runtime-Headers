@interface MRSetHiliteModeMessage : MRProtocolMessage

@property (readonly, nonatomic) char hiliteMode;

- (unsigned long long)type;
- (id)initWithHiliteMode:(char)a0;

@end
