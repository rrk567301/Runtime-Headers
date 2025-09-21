@class NSArray;

@interface SPSettingsQueryResult : SPCoreSpotlightResult <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)description;
- (void).cxx_destruct;
- (id)displayName;
- (id)category;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (id)initWithResult:(id)a0;
- (char)isFile;
- (char)isDir;
- (id)copyrightString;
- (char)isApplicationQueryResult;

@end
