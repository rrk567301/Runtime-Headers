@interface ABLinkPeopleCommand : ABLinkingCommand {
    BOOL ignoresGuardianRestrictions;
}

- (id)actionName;
- (BOOL)ignoresGuardianRestrictions;
- (void)setIgnoresGuardianRestrictions:(BOOL)a0;
- (void)changePeople:(id)a0;
- (void)preferSomeoneForProperties:(id)a0;
- (id)pickPreferredPersonFromPeople:(id)a0;

@end
