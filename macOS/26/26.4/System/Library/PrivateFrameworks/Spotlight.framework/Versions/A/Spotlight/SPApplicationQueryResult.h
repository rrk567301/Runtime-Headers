@class NSArray;

@interface SPApplicationQueryResult : SPMetadataResult <NSSecureCoding> {
    unsigned __int128 _score;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)category;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (void)setScore:(unsigned __int128)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned __int128)score;
- (BOOL)isFile;
- (BOOL)isDir;
- (BOOL)isApplicationQueryResult;

@end
