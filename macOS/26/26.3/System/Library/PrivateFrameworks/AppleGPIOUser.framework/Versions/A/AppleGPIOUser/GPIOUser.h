@interface GPIOUser : NSObject {
    struct GPIOUserInternal { unsigned int connection; unsigned int service; } _user;
}

- (void)dealloc;
- (int)getGPIO:(unsigned int *)a0;
- (id)initWithName:(id)a0 result:(int *)a1;
- (int)setGPIO:(unsigned int)a0;

@end
