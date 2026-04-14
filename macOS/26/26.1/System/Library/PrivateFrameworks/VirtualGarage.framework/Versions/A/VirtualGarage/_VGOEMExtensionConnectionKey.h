@class INIntent;

@interface _VGOEMExtensionConnectionKey : NSObject {
    INIntent *_intent;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIntent:(id)a0;

@end
