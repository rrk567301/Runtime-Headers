@class NSString;

@interface PDCommentAuthor : NSObject {
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (id)description;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (unsigned int)id;
- (void)setName:(id)a0;
- (unsigned int)colorIndex;
- (id)initials;
- (unsigned int)lastCommentIndex;
- (void)setColorIndex:(unsigned int)a0;
- (void)setId:(unsigned int)a0;
- (void)setInitials:(id)a0;
- (void)setLastCommentIndex:(unsigned int)a0;

@end
