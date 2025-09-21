@class NSArray;

@interface SPApplicationQueryResult : SPMetadataResult <NSSecureCoding> {
    unsigned __int128 _score;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)category;
- (unsigned __int128)score;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (void)setScore:(unsigned __int128)a0;
- (id)initWithResult:(id)a0;
- (char)isFile;
- (char)isDir;
- (char)isApplicationQueryResult;

@end
