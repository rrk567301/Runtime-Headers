@class EDCollection;

@interface EDLink : NSObject {
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)a0;

- (void)setType:(int)a0;
- (id)initWithType:(int)a0;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)externalNames;

@end
