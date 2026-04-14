@class NSArray;

@interface SPSettingsQueryResult : SPCoreSpotlightResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)category;
- (id)displayName;
- (id)valueForAttribute:(id)a0;
- (id)groupName;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)description;
- (BOOL)isFile;
- (BOOL)isDir;
- (id)copyrightString;
- (BOOL)isApplicationQueryResult;

@end
