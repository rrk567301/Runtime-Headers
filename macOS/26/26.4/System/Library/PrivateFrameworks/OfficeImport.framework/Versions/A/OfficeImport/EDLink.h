@class EDCollection;

@interface EDLink : NSObject {
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)a0;

- (id)initWithType:(int)a0;
- (void)setType:(int)a0;
- (void).cxx_destruct;
- (int)type;
- (id)description;
- (id)externalNames;

@end
