@class NSArray;

@interface SPApplicationQueryResult : SPMetadataResult <NSSecureCoding> {
    unsigned __int128 _score;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)initWithResult:(id)a0;
- (id)groupName;
- (id)category;
- (id)initWithCoder:(id)a0;
- (unsigned __int128)score;
- (id)valueForAttribute:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (void)setScore:(unsigned __int128)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isFile;
- (BOOL)isDir;
- (BOOL)isApplicationQueryResult;

@end
