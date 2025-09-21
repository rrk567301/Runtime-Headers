@class NSString;

@interface DOMTokenList : DOMObject

@property (readonly) unsigned int length;
@property (copy) NSString *value;

- (void)dealloc;
- (char)contains:(id)a0;
- (id)item:(unsigned int)a0;
- (char)toggle:(id)a0 force:(char)a1;

@end
