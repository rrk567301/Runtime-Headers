@class NSString;

@interface PDCommentAuthor : NSObject {
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (unsigned int)id;
- (void)setName:(id)a0;
- (id)init;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (unsigned int)colorIndex;
- (id)initials;
- (unsigned int)lastCommentIndex;
- (void)setColorIndex:(unsigned int)a0;
- (void)setId:(unsigned int)a0;
- (void)setInitials:(id)a0;
- (void)setLastCommentIndex:(unsigned int)a0;

@end
