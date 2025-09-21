@class NSArray;

@interface SPSettingsQueryResult : SPCoreSpotlightResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *displayNameInitials;

- (id)initWithResult:(id)a0;
- (id)category;
- (id)groupName;
- (id)displayName;
- (id)description;
- (id)valueForAttribute:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFile;
- (BOOL)isDir;
- (id)copyrightString;
- (BOOL)isApplicationQueryResult;

@end
