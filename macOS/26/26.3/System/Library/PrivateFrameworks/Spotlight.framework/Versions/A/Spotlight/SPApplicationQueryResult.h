@class NSArray;

@interface SPApplicationQueryResult : SPMetadataResult <NSSecureCoding> {
    unsigned __int128 _score;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)valueForAttribute:(id)a0;
- (void)setScore:(unsigned __int128)a0;
- (id)debugDescription;
- (id)groupName;
- (id)initWithResult:(id)a0;
- (id)description;
- (unsigned __int128)score;
- (id)category;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isFile;
- (BOOL)isDir;
- (BOOL)isApplicationQueryResult;

@end
