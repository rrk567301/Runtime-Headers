@class NSString;

@interface PDCommentAuthor : NSObject {
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (id)name;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (unsigned int)id;
- (void)setId:(unsigned int)a0;
- (unsigned int)colorIndex;
- (id)initials;
- (void)setInitials:(id)a0;
- (unsigned int)lastCommentIndex;
- (void)setLastCommentIndex:(unsigned int)a0;
- (void)setColorIndex:(unsigned int)a0;

@end
