@interface CALPreconfiguredDetachDelegate : NSObject <CALDetachmentDelegate> {
    int action;
}

+ (id)preconfiguredDetachWithAction:(int)a0;

- (id)initWithAction:(int)a0;
- (int)decideDetachmentFor:(id)a0 withOccurrence:(id)a1;

@end
