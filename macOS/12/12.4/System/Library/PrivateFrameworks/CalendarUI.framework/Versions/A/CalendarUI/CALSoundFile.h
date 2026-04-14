@class NSString;

@interface CALSoundFile : NSObject {
    int _type;
    NSString *_name;
    NSString *_extension;
}

- (id)name;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (void)setName:(id)a0;
- (id)path;
- (id)displayName;
- (id)pathWithoutExtension;
- (long long)compareName:(id)a0;
- (long long)compareType:(id)a0;
- (id)initWithName:(id)a0 type:(int)a1 extension:(id)a2;
- (long long)compareNameThenType:(id)a0;
- (long long)compareTypeThenName:(id)a0;

@end
