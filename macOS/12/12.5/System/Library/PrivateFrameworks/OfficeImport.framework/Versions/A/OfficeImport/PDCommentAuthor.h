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
- (void)setName:(id)a0;
- (unsigned int)id;
- (void)setId:(unsigned int)a0;
- (unsigned int)colorIndex;
- (void)setColorIndex:(unsigned int)a0;
- (void)setLastCommentIndex:(unsigned int)a0;
- (id)initials;
- (void)setInitials:(id)a0;
- (unsigned int)lastCommentIndex;

@end
