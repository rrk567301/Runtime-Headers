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

- (struct CGPoint { double x0; double x1; })position;
- (unsigned int)index;
- (void)setIndex:(unsigned int)a0;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)date;
- (id)text;
- (void)setDate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (id)init;
- (unsigned long long)authorId;
- (void)setAuthorId:(unsigned long long)a0;

@end
