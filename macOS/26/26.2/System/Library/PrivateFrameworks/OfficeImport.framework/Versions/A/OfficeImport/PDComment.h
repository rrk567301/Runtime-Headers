@class NSString, NSDate;

@interface PDComment : NSObject {
    struct CGPoint { double x; double y; } mPosition;
    NSString *mText;
    unsigned long long mAuthorId;
    NSDate *mDate;
    unsigned int mIndex;
}

@property (retain, nonatomic) NSString *author;
@property (retain) PDComment *parent;

- (void)setText:(id)a0;
- (id)date;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (unsigned int)index;
- (id)text;
- (void).cxx_destruct;
- (id)description;
- (struct CGPoint { double x0; double x1; })position;
- (void)setIndex:(unsigned int)a0;
- (id)init;
- (void)setDate:(id)a0;
- (unsigned long long)authorId;
- (void)setAuthorId:(unsigned long long)a0;

@end
