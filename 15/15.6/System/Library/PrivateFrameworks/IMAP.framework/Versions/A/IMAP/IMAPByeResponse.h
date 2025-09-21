@interface IMAPByeResponse : IMAPBasicResponse

+ (char)handlesResponseWithName:(const char *)a0 ofLength:(unsigned long long)a1;

- (const char *)_responseName;
- (char)descriptionIncludesUserString;

@end
